/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject {

	BOOL _confirmed;
	PHFace* _keyFace;
	PHPerson* _person;

}

@property (nonatomic,readonly) PHFace * keyFace;               //@synthesize keyFace=_keyFace - In the implementation block
@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                 //@synthesize confirmed=_confirmed - In the implementation block
-(PHFace *)keyFace;
-(id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(BOOL)arg3 ;
-(BOOL)confirmed;
-(PHPerson *)person;
@end
