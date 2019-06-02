/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/NTKPageDot.h>

@class UIImage;

@interface _NTKPageDot : UIImageView <NTKPageDot> {

	double _diameter;
	UIImage* _currentPageImage;
	UIImage* _otherPageImage;
	BOOL _representsCurrentPage;

}

@property (assign,nonatomic) BOOL representsCurrentPage;              //@synthesize representsCurrentPage=_representsCurrentPage - In the implementation block
-(void)_updateImage;
-(BOOL)representsCurrentPage;
-(void)setRepresentsCurrentPage:(BOOL)arg1 ;
-(id)initWithDiameter:(double)arg1 currentPageColor:(id)arg2 otherPageColor:(id)arg3 forDevice:(id)arg4 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
