class Animal:
    def __init__(self, legCount=2) -> None:
        """
        If you want to indicate that something is not for public use, but it should act like protected use _. If you want to indicate that something is not for public use, but it should act like private use __.
        """
        self._legCount = legCount
    
    def setLegCount(self, legCount) -> None:
        self._legCount = legCount

    def getLegCount(self) -> int:
        return self._legCount;