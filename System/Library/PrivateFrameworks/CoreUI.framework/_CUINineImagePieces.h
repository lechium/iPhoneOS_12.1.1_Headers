/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUIImage;

@interface _CUINineImagePieces : NSObject {

	CUIImage* _center;
	CUIImage* _topLeft;
	CUIImage* _top;
	CUIImage* _topRight;
	CUIImage* _right;
	CUIImage* _bottomRight;
	CUIImage* _bottom;
	CUIImage* _bottomLeft;
	CUIImage* _left;
	BOOL _tileCenterAndEdges;

}
-(id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(BOOL)arg10 ;
-(BOOL)tileCenterAndEdges;
-(id)topLeft;
-(id)topRight;
-(id)bottomLeft;
-(id)bottomRight;
-(id)left;
-(id)top;
-(id)right;
-(id)bottom;
-(void)dealloc;
-(id)center;
@end

