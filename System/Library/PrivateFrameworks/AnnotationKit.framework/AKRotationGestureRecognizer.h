/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {

	unsigned long long tries;
	AKController* _annotationController;

}

@property (assign,nonatomic,__weak) AKController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)setAnnotationController:(AKController *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setState:(long long)arg1 ;
-(AKController *)annotationController;
@end
