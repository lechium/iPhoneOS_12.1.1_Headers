/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSDAnnotationController : NSObject

@property (nonatomic,readonly) BOOL hasAnnotations; 
@property (nonatomic,readonly) NSString * annotationNavigationString; 
@property (assign,nonatomic) BOOL textSelectionChangeShouldDismissAnnotations; 
-(BOOL)hasAnnotations;
-(void)nextAnnotation:(id)arg1 ;
-(void)previousAnnotation:(id)arg1 ;
-(id)annotationNavigationTypeStringUsedForNavigating:(BOOL)arg1 ;
-(NSString *)annotationNavigationString;
-(void)setTextSelectionChangeShouldDismissAnnotations:(BOOL)arg1 ;
-(BOOL)textSelectionChangeShouldDismissAnnotations;
-(void)registerDelegate:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(void)willShowAnnotation:(id)arg1 ;
-(void)didShowAnnotation:(id)arg1 ;
-(void)commitCommentText:(id)arg1 forAnnotation:(id)arg2 ;
@end

