/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView {

	TSDLineEnd* mLineEnd;
	BOOL mOnRight;

}

@property (nonatomic,retain) TSDLineEnd * lineEnd; 
@property (assign,nonatomic) BOOL onRight; 
+(id)viewWithLineEnd:(id)arg1 onRight:(BOOL)arg2 ;
-(void)setLineEnd:(TSDLineEnd *)arg1 ;
-(void)setOnRight:(BOOL)arg1 ;
-(TSDLineEnd *)lineEnd;
-(BOOL)onRight;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end

