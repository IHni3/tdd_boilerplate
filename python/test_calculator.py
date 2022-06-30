import unittest

from calculator import Calculator


class TestCalculator(unittest.TestCase):
    def test_add(self):
        calculator = Calculator()
        result = calculator.add(10, 10)
        self.assertEqual(result, 20)

    def test_sub(self):
        calculator = Calculator()
        result = calculator.sub(30, 10)
        self.assertEqual(result, 20)

    def test_sqrt(self):
        calculator = Calculator()
        result = calculator.sqrt(9)
        self.assertEqual(result, 3)

        result = calculator.sqrt(16)
        self.assertEqual(result, 4)

        result = calculator.sqrt(25)
        self.assertEqual(result, 5)
    
    def test_failing(self):
        calculator = Calculator()
        result = calculator.sqrt(23)
        self.assertEqual(result, 3)