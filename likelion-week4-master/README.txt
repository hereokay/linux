12183443이민재 과제 설명

1. gis.h

헤더파일이다. 
이 헤더파일에는 두 개의 standard library가 들어가있다.
이 이유는 각 c 파일에서 공통된 라이브러리를 사용하는데 이를 중복해서 열 필요가 없이
헤더파일에서 include 해주면 한번에 사용할 수 있기 때문이다.

그 다음으로는 두 개의 구조체가 들어가있다.
gisinfo라는 구조체는 degree, minute, second, totalSec, dms, direction으로 구성되어 있다.
이는 각각의 도, 분, 초, 좌표를 초단위 변환값, dms형식의 input값, 방향값이다.

그 다음 coordinate라는 구조체는 gisinfo하는 구조체를 받는데,
이는 위도와 경도를 분리하여 사용할 수 있게 한다.

2. main.c

main에서는 각 API들을 참조하기 위한 함수들의 prototype이 delcare 되어있다.
좌표 두 개를 구분하기 위한 전역변수로 a, b를 설정했고,
input에서 10개의 좌표가 있으므로 이 구조체 배열을 10개를 할당해놓았다.
만약 input 파일에 변화가 생기게 되면 적절히 이 배열의 크기를 조절하면 될 것이다.

main함수로 들어오게 되면 getGIS API에서 return값으로 좌표의 개수를 받는다.
이를 활용해 convertDMS에서는 dms 값의 추출이 이루어지게 되고,
printDistance에서는 실제 이 변환된 값들의 총 출력이 이루어지게 된다.

3. getGIS.c

getGIS에서는 크게 예시에서 벗어나지 않았다.
처음에 입력이 되는 text들을 dms와 direction을 구분하여 각 구조체에 저장한다.

4. convert.c

이 부분에서 도, 분, 초, 초단위 변환값의 변환이 이루어진다.
dms라는 하나의 int 값이 들어왔는데, 이를 
경도에 경우 3 2 2, 위도의 경우 2 2 2로 쪼개서 각 구조체에 맞게 할당해준다.
int 형태이기 때문에 division 연산과 modular 연산을 적절하게 배분했다.
또한 total second의 경우에는 서경인지 동경인지, 북위인지 남위인지에 따라
음수, 양수값을 지정해주었다. 본 필자의 경우 서경과 남위의 값들을 음수로 지정해주었다.
구조체의 값들만 수정하면 되기 때문에 void 형태로 작성했다.

5. printDistance

이 API는 distanceSec의 계산 동시에 출력을 담당한다.
distanceSec의 경우에는 taxi-cab geometry를 활용한 결과물이다.
그렇게 떄문에 두 위도, 경도의 차이의 절대값을 더해주어 계산을 진행하였다.

출력 부분에서는 일관성을 유지하기 위해 빈 값들에 대해서는 0을 자리에 맞게 출력을 해주었다.
출력의 마지막 부분을 distanceSec에 대한 dms를 구하는 것이기 때문에 이역시도 
division 연산과 modular 연산을 통해 적절히 구현했다.





