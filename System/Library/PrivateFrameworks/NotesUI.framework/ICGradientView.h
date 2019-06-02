/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, NSArray;

@interface ICGradientView : UIView

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,copy) NSArray * gradientColors; 
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CAGradientLayer *)gradientLayer;
-(NSArray *)gradientColors;
-(void)setLocations:(NSArray *)arg1 ;
@end

