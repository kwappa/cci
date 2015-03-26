class String
  def unique?
    compare_str = self.split('')

    compare_str.each_with_index do |c, idx|
      for i in (idx + 1 ... self.length)
        return false if c == compare_str[i]
      end
    end

    true
  end
end
