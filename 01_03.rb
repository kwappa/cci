class String
  def anagram?(word)
    return false unless self.length == word.length
    self.split('').sort == word.split('').sort
  end
end
