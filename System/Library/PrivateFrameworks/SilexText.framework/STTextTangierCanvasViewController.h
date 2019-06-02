/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexText/SilexText-Structs.h>
#import <TSReading/TSWPiOSCanvasViewController.h>

@class NSArray;

@interface STTextTangierCanvasViewController : TSWPiOSCanvasViewController {

	NSArray* _installedGestureRecognizers;

}

@property (nonatomic,readonly) NSArray * installedGestureRecognizers;              //@synthesize installedGestureRecognizers=_installedGestureRecognizers - In the implementation block
-(void)setUpGestureDependenciesWithScrollView:(id)arg1 ;
-(void)setUpGestureRecognizers;
-(id)backgroundColorForMagnifier;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
-(NSArray *)installedGestureRecognizers;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
@end
