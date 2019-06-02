/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactConfirmed : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(void)trackEventWithScalar:(unsigned long long)arg1 app:(SGMBannerDisplayApp_)arg2 firstNameAdj:(SGMTypeSafeBool_)arg3 lastNameAdj:(SGMTypeSafeBool_)arg4 middleNameAdj:(SGMTypeSafeBool_)arg5 isUpdate:(SGMTypeSafeBool_)arg6 extracted:(SGMBannerExtractionType_)arg7 ;
-(PETScalarEventTracker *)tracker;
-(id)init;
@end

