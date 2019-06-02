/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIDebugLogReport;

@interface _UIDeepestPreferredEnvironmentSearch : NSObject {

	BOOL _allowsFocusRestoration;
	_UIDebugLogReport* _debugReport;

}

@property (assign,nonatomic) BOOL allowsFocusRestoration;                  //@synthesize allowsFocusRestoration=_allowsFocusRestoration - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;              //@synthesize debugReport=_debugReport - In the implementation block
-(id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1 ;
-(_UIDebugLogReport *)debugReport;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
-(void)_reportStartingSearch;
-(void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2 ;
-(BOOL)allowsFocusRestoration;
-(void)_reportSearchingEnvironment:(id)arg1 ;
-(void)_reportFoundFocusableItem:(id)arg1 ;
-(void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1 ;
-(id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2 ;
-(void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2 ;
-(id)deepestPreferredFocusableItemForEnvironment:(id)arg1 inFocusSystem:(id)arg2 ;
-(void)setAllowsFocusRestoration:(BOOL)arg1 ;
@end

