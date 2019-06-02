/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentInsertionManager.h>

@protocol SXComponentInsertionManager <NSObject>
@required
-(void)insertComponentsForBlueprint:(id)arg1 layoutDataProvider:(id)arg2;

@end


@protocol SXComponentInsertionConditionEngine, SXComponentInserterProvider, SXBlueprintAnalyzer;
@class NSString;

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager> {

	BOOL _hasInsertedComponents;
	id<SXComponentInsertionConditionEngine> _conditionEngine;
	id<SXComponentInserterProvider> _inserterProvider;
	id<SXBlueprintAnalyzer> _blueprintAnalyzer;

}

@property (nonatomic,readonly) id<SXComponentInserterProvider> inserterProvider;                     //@synthesize inserterProvider=_inserterProvider - In the implementation block
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;              //@synthesize conditionEngine=_conditionEngine - In the implementation block
@property (nonatomic,readonly) id<SXBlueprintAnalyzer> blueprintAnalyzer;                            //@synthesize blueprintAnalyzer=_blueprintAnalyzer - In the implementation block
@property (assign,nonatomic) BOOL hasInsertedComponents;                                             //@synthesize hasInsertedComponents=_hasInsertedComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)insertComponentsForBlueprint:(id)arg1 layoutDataProvider:(id)arg2 ;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(id)initWithComponentInserterProvider:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3 ;
-(BOOL)hasInsertedComponents;
-(id<SXComponentInserterProvider>)inserterProvider;
-(id<SXBlueprintAnalyzer>)blueprintAnalyzer;
-(id)insertForMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 inserter:(id)arg3 layoutProvider:(id)arg4 layoutDataProvider:(id)arg5 ;
-(void)updateLayoutDataProvider:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4 ;
-(void)setHasInsertedComponents:(BOOL)arg1 ;
@end

