/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebDocumentView;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, NSArray, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject {

	NSObject*<WebDocumentView> _documentView;
	double _scaleFactor;
	CGSize _layoutSize;
	NSArray* _pageRects;
	UIWebDocumentView* _webDocumentView;

}

@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) double lastPageHeight; 
@property (nonatomic,retain) UIWebDocumentView * webDocumentView;              //@synthesize webDocumentView=_webDocumentView - In the implementation block
-(void)dealloc;
-(double)scaleFactor;
-(unsigned long long)pageCount;
-(id)documentView;
-(CGSize)layoutSize;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(id)pageRects;
-(id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(CGSize)arg3 pageRects:(id)arg4 ;
-(void)setWebDocumentView:(UIWebDocumentView *)arg1 ;
-(double)lastPageHeight;
-(UIWebDocumentView *)webDocumentView;
@end

