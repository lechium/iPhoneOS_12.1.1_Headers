/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView {

	NSArray* _iconImages;
	double _iconPadding;
	CGPoint _drawingOffset;

}

@property (nonatomic,retain) NSArray * iconImages;               //@synthesize iconImages=_iconImages - In the implementation block
@property (assign,nonatomic) double iconPadding;                 //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) CGPoint drawingOffset;              //@synthesize drawingOffset=_drawingOffset - In the implementation block
-(void)setIconPadding:(double)arg1 ;
-(double)iconPadding;
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(NSArray *)iconImages;
-(void)setIconImages:(NSArray *)arg1 ;
-(CGPoint)drawingOffset;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(double)preferredWidth;
@end
