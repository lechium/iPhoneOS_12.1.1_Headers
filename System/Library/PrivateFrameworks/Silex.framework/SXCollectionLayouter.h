/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate;
@class SXLayouterFactory, SXContainerComponentBlueprint, NSString;

@interface SXCollectionLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> _delegate;
	SXLayouterFactory* _layouterFactory;
	SXContainerComponentBlueprint* _containerComponentBlueprint;

}

@property (nonatomic,readonly) SXLayouterFactory * layouterFactory;                                      //@synthesize layouterFactory=_layouterFactory - In the implementation block
@property (nonatomic,readonly) SXContainerComponentBlueprint * containerComponentBlueprint;              //@synthesize containerComponentBlueprint=_containerComponentBlueprint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 layoutAttributes:(id)arg3 shouldContinue:(BOOL*)arg4 ;
-(SXLayouterFactory *)layouterFactory;
-(SXContainerComponentBlueprint *)containerComponentBlueprint;
-(id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 ;
-(id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 ;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(id<SXLayouterDelegate>)delegate;
@end

