/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor {

	BOOL _lastPreventingRestartAssertionsStatus;
	int _userspaceAssertionsToken;
	int _preventIdleSleepAssertionsToken;
	int _systemAssertionsToken;
	int _restartPreventerAssertionsToken;

}

@property (assign,nonatomic) int userspaceAssertionsToken;                            //@synthesize userspaceAssertionsToken=_userspaceAssertionsToken - In the implementation block
@property (assign,nonatomic) int preventIdleSleepAssertionsToken;                     //@synthesize preventIdleSleepAssertionsToken=_preventIdleSleepAssertionsToken - In the implementation block
@property (assign,nonatomic) int systemAssertionsToken;                               //@synthesize systemAssertionsToken=_systemAssertionsToken - In the implementation block
@property (assign,nonatomic) int restartPreventerAssertionsToken;                     //@synthesize restartPreventerAssertionsToken=_restartPreventerAssertionsToken - In the implementation block
@property (assign,nonatomic) BOOL lastPreventingRestartAssertionsStatus;              //@synthesize lastPreventingRestartAssertionsStatus=_lastPreventingRestartAssertionsStatus - In the implementation block
+(id)eventStream;
+(id)entitlements;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(void)saveState;
-(BOOL)areAssertionsPreventingRestart;
-(int)userspaceAssertionsToken;
-(void)setUserspaceAssertionsToken:(int)arg1 ;
-(int)preventIdleSleepAssertionsToken;
-(void)setPreventIdleSleepAssertionsToken:(int)arg1 ;
-(int)systemAssertionsToken;
-(void)setSystemAssertionsToken:(int)arg1 ;
-(int)restartPreventerAssertionsToken;
-(void)setRestartPreventerAssertionsToken:(int)arg1 ;
-(BOOL)lastPreventingRestartAssertionsStatus;
-(void)setLastPreventingRestartAssertionsStatus:(BOOL)arg1 ;
-(void)stop;
-(void)start;
@end
