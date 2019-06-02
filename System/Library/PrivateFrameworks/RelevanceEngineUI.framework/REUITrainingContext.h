/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RETrainingContext.h>

@class NSMutableDictionary, NSArray;

@interface REUITrainingContext : RETrainingContext {

	NSMutableDictionary* _becameVisibleDates;
	NSMutableDictionary* _visibilityDurations;
	BOOL _resetsWhenResignsCurrent;

}

@property (nonatomic,readonly) double maximumNegativeDwellTime; 
@property (nonatomic,readonly) double minimumPositiveDwellTime; 
@property (nonatomic,readonly) unsigned long long onScreenElementCount; 
@property (nonatomic,readonly) NSArray * visibleElementIdentifiers; 
@property (assign,nonatomic) BOOL resetsWhenResignsCurrent;                          //@synthesize resetsWhenResignsCurrent=_resetsWhenResignsCurrent - In the implementation block
-(void)_willResignCurrent;
-(BOOL)performSimulationCommand:(id)arg1 withOptions:(id)arg2 ;
-(id)_interactionForElement:(id)arg1 ;
-(BOOL)resetsWhenResignsCurrent;
-(void)resetContext;
-(BOOL)isDisplayingElementWithIdentifier:(id)arg1 ;
-(void)elementWithIdentifierDidEndDisplay:(id)arg1 ;
-(id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2 ;
-(BOOL)elementIsAvailable:(id)arg1 ;
-(id)interactionTypeForElement:(id)arg1 ;
-(double)maximumNegativeDwellTime;
-(double)minimumPositiveDwellTime;
-(unsigned long long)onScreenElementCount;
-(void)selectElementWithIdentifier:(id)arg1 ;
-(void)elementWithIdentifierDidDisplay:(id)arg1 ;
-(id)_visibleElements;
-(id)_higherElementsThanElement:(id)arg1 ;
-(id)_lowerElementsThanElement:(id)arg1 ;
-(void)_trainDwellForElement:(id)arg1 withInterval:(double)arg2 ;
-(NSArray *)visibleElementIdentifiers;
-(void)setResetsWhenResignsCurrent:(BOOL)arg1 ;
-(id)init;
@end

