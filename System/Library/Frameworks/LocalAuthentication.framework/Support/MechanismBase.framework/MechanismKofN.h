/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase.h>

@class NSMutableArray, NSArray;

@interface MechanismKofN : MechanismBase {

	NSMutableArray* _runningMechanisms;
	BOOL _finishing;
	BOOL _serial;
	BOOL _AND;
	BOOL _OR;
	unsigned long long _k;
	unsigned long long _n;
	NSArray* _submechanisms;

}

@property (k,nonatomic,readonly) unsigned long long k;                   //@synthesize k=_k - In the implementation block
@property (n,nonatomic,readonly) unsigned long long n;                   //@synthesize n=_n - In the implementation block
@property (nonatomic,readonly) NSArray * submechanisms;                  //@synthesize submechanisms=_submechanisms - In the implementation block
@property (getter=isSerial,nonatomic,readonly) BOOL serial;              //@synthesize serial=_serial - In the implementation block
@property (getter=isAND,nonatomic,readonly) BOOL AND;                    //@synthesize AND=_AND - In the implementation block
@property (getter=isOR,nonatomic,readonly) BOOL OR;                      //@synthesize OR=_OR - In the implementation block
+(id)mechanismWithK:(unsigned long long)arg1 ofSubmechanisms:(id)arg2 serial:(BOOL)arg3 ;
-(unsigned long long)k;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(id)availabilityEventsForPurpose:(long long)arg1 ;
-(BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(id)cachedExternalizationDelegate;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)bestEffortAvailableMechanismForPurpose:(long long)arg1 error:(id*)arg2 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(BOOL)requiresUiWithEventProcessing:(id)arg1 ;
-(id)additionalControllerInternalInfoForPolicy:(long long)arg1 ;
-(id)initWithK:(unsigned long long)arg1 ofSubmechanisms:(id)arg2 serial:(BOOL)arg3 ;
-(void)_runSubmechanismAtIndex:(long long)arg1 hints:(id)arg2 eventsDelegate:(id)arg3 succeeded:(long long)arg4 failed:(long long)arg5 results:(id)arg6 reply:(/*^block*/id)arg7 ;
-(unsigned long long)n;
-(NSArray *)submechanisms;
-(BOOL)isSerial;
-(BOOL)isAND;
-(BOOL)isOR;
-(id)description;
@end
