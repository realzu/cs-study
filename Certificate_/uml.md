> UML

Unified Modeling Language  
객체 지향 소프트웨어 개발 과정에서 산출물을 명세화, 시각화, 문서화할 때 사용되는 모델링 기술과 방법론을 통합하여 만든 표준화된 범용 모델링 언어

---

🔹 UML 특징  
가시화, 구축, 명세화, 문서화 언어

🔹 UML 구성요소  
사물, 관계, 다이어그램

🔹 UML 다이어그램

<구조적 / 정적 다이어그램>

클래스: 클래스속성, 연산-클래스 정적관계   
객체: 인스턴스  
컴포넌트: 시스템 구성 물리적 컴포넌트 의존관계  
배치: 물리적 요소들 위치, 종속성  
복합체 구조: 복합구조시 내부구조 표현  
패키지: 모델 요소 그룹화 관계  

<행위적 / 동적 다이어그램>  

유스케이스: 사용자 관점. 시스템 제공 기능  
시퀀스: 시간적 메시지 흐름. 객체 간 동적 상호작용  
커뮤니케이션: 동적참여객체 메시지 표현  
상태: 다른 객체 상호작용 후 상태 변화  
활동: 시스템기능 처리 흐름  
타이밍: 객체 상태 변화와 시간 제약 표현  

🔸 클래스 다이어그램 관계  
연관: 개념적 연결, 실선(화살표)  
의존: 필요따라 짧은 시간 유지, 점선화살표  
일반화: 상위/하위(구체). 상속, 속빈화살표  
실체화: 사물이 할수있/해야하는  
포함: 집합관계특수, 영향미침, 속찬마름모  
집합: 한 객체-여러 독립 객체, 속빈마름모  

🔸 유스케이스 다이어그램 관계  
포함(include): 타 case 반드시수행. 중복  
확장(Extend): 한 case에서 추가/확장  
일반화(Generalization): 액터. 속빈삼각형. 실선  