/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CoreThemeConstantEnumerator : NSObject {

	void* _globalListPointer;
	long long _listIndex;
	long long _indexOfLastEntry;
	BOOL _isPastLastEntry;

}
+(id)enumeratorForGlobalListAtAddress:(void*)arg1 ;
-(id)initWithGlobalListAtAddress:(void*)arg1 ;
-(id)nextConstantHelper;
-(void)_moveToIndexOfLastEntry;
-(id)currentConstantHelper;
-(long long)constantCount;
-(id)previousConstantHelper;
-(id)firstConstantHelper;
-(id)lastConstantHelper;
@end

