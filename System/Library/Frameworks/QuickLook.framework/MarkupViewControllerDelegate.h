/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MarkupViewControllerDelegate <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(BOOL)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
-(void)controllerWantsToShowShareSheet:(id)arg1;
-(void)controller:(id)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
-(void)controller:(id)arg1 didReadCGPDFDocument:(CGPDFDocumentRef)arg2;
-(void)controller:(id)arg1 willWriteCGPDFDocument:(CGPDFDocumentRef)arg2 toContext:(CGContextRef)arg3;
-(UIEdgeInsets*)customEdgeInsets;
-(UIEdgeInsets*)customSketchOverlayInsets;

@end
