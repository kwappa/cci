class String
  def escape_blank
    self.strip.gsub(/\ +/, '%20')
  end
end
