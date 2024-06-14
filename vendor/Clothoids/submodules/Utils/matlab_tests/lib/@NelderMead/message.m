% =================================================================
% Search
% =================================================================

function message( self, rtol )
  if self.m_verbose > 1
    line = '-------------------------------------------------------------------------';
    if self.m_verbose > 2
      fprintf('%s\n',line');
    end
    Vr = self.regular_simplex_volume( self.m_diameter );
    fprintf( ...
      '#it=%-5d #f=%-5d %-15s f(x)=%-8.6g |grad(x)|=%-8.6g |err|=%-7.3g diam=%-7.3g V/Vr=%-7.3g [%g/%g]\n',...
      self.m_iteration_count, self.m_fun_evaluation_count, ...
      self.m_which_step, self.m_f(self.m_low), norm(self.gradient(),Inf), ...
      rtol, ...
      self.m_diameter, ...
      self.m_simplex_volume/Vr, ...
      self.m_simplex_volume, Vr ...
    );
    %fprintf( 'X=%g Y=%g\n',self.m_p(self.m_low,1),self.m_p(self.m_low,2) );
  end
end