/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface DOCDownloadCircleView : UIView {

	double _startAngle;
	double _endAngle;
	double _lineWidth;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (assign,nonatomic) double startAngle;                        //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                          //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) double lineWidth;                         //@synthesize lineWidth=_lineWidth - In the implementation block
+(Class)layerClass;
-(void)setEndAngle:(double)arg1 ;
-(double)endAngle;
-(void)updateShapeLayer;
-(void)setupCircleView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setLineWidth:(double)arg1 ;
-(CAShapeLayer *)shapeLayer;
-(double)lineWidth;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
@end

