# cpp


## C++ Module 00

Namespace, class, member functions, stdio stream,
initialization lists, static, const, and lots of basic stuff

* 네임스페이스 = 소속
* 클래스
* 멤버 함수 = 클래스에 속한 함수
* static
  1. 정적 멤버 변수는 클래스당 하나만 생성된다. 객체 별로 할당되지 않고 클래스의 모든 객체가 공유한다.
  2. 정적 멤버 함수는 해당 클래스의 객체를 생성하지 않고도, 클래스 이름만으로 호출할 수 있다.
  3. 객체를 생성하지 않으므로 this 포인터를 가지지 않는다.
  4. 정적 맴버 변수만 사용 가능하다.
* iostream
  c++ 에서 표준 입출력에 필요한 기능들을 포함하는 표준 라이브러리. std::cout, std::endl 등등


## C++ Module 01

Memory allocation, references, pointers to members,
switch

* new: new 연산자는 메모리를 할당하고 할당된 메모리의 주소가 포함된 포인터를 반환한다. delete 연산자로 해제한다.

* 참조자
  1. 할당된 메모리 공간에 다른 이름을 붙이는 것, 별명.
  2. 참조자는 선언과 동시에 초기화되어야 한다.
  3. 참조자는 한번 초기화 되면, 참조하는 대상을 변경할 수 없다.


## C++ Module 02
Ad-hoc polymorphism, operators overload and
orthodox canonical classes

* 다형성: 하나의 객체가 여러 가지 타입을 가질 수 있는 것
* 대입 연산자 오버로드
  1. 정의하지 않으면 디폴트 대입 연산자가 만들어짐
  2. 디폴트 대입 연산자는 얕은 복사를 한다.
  3. 연산자 내에서 동적 할당을 하거나 깊은 복사가 필요하면 직접 정의 해야한다.

* canonical: "규정대로"하는 프로그래밍 일종의 코딩 컨벤션과 같다
  1. 디폴트 생성자
  2. 복사 생성자
  3. 할당 연산자 오버로딩
  4. 소멸자


## C++ Module 03
Inheritance
* 상속: 기존의 클래스에 기능을 추가하거나 재정의하여 새로운 클래스를 정의하는 것
  1. 기존에 작성된 클래스를 재활용
  2. 자식 클래스 설계 시 중복되는 멤버를 미리 부모 클래스에 작성해 놓으면, 자식 클래스에서는 해당 멤버를 작성하지 않아도 된다.
<img src="http://tcpschool.com/lectures/img_java_inheritance_diagram.png" width=30%>
출처: TCPschool.com

## C++ Module 04
Subtype polymorphism, abstract classes, interfaces

* 런타임 다형성
  1. Compile time polymorphism은 Overloading으로 구현되고, Runtime polymorphism은 Overriding으로 구현된다.
    * 오버로딩: 매개 변수가 다른 같은 이름의 함수를 만드는것.
    * 오버라이딩: 이미 정의된 함수를 무시하고, 같은 이름의 함수를 새롭게 정의하는 것

* 추상 메소드: 자식 클래스에서 반드시 오버라이딩해야만 사용할 수 있는 메소드
* 추상클래스: 하나 이상의 추상 메소드를 포함하는 클래스
* 인터페이스: 다른 클래스를 작성할 때 기본이 되는 틀

## C++ Module 05
Repetition and Exceptions

* try catch throw

## C++ Module 06
C++ Casts


## C++ Module 07
c++ Templates

* 템플릿: 사용자(프로그래머)가 원하는 타입을 넣어주면 딱딱 알아서 코드를 찍어내는 틀

## C++ Module 08
Templated containers, iterators, algorithms

* 컨테이너: 같은 타입의 여러 객체를 저장하는 일종의 집합. 컨테이너는 클래스 템플릿으로, 컨테이너 변수를 선언할 때 컨테이너에 포함할 요소의 타입을 명시할 수 있다.
* iterator: STL 컨테이너의 구조나 요소의 타입과는 상관없이 컨테이너에 저장된 요소를 반복적으로 순회하여, 각각의 요소에 대한 접근을 제공하는 객체
