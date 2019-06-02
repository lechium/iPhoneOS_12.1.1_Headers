/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject {

	BOOL _transitionInProgress;
	BOOL _layoutInProgress;
	NSHashTable* _candidates;

}

@property (nonatomic,readonly) NSHashTable * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (assign,nonatomic) BOOL transitionInProgress;               //@synthesize transitionInProgress=_transitionInProgress - In the implementation block
@property (assign,nonatomic) BOOL layoutInProgress;                   //@synthesize layoutInProgress=_layoutInProgress - In the implementation block
-(void)setLayoutInProgress:(BOOL)arg1 ;
-(void)setTransitionInProgress:(BOOL)arg1 ;
-(BOOL)layoutInProgress;
-(void)enterFullscreenIfNeeded;
-(void)addCandidate:(id)arg1 ;
-(void)removeCandidate:(id)arg1 ;
-(void)willLayoutAndTransitionToSize:(CGSize)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(void)didLayoutForSize:(CGSize)arg1 ;
-(id)init;
-(NSHashTable *)candidates;
-(BOOL)transitionInProgress;
@end

