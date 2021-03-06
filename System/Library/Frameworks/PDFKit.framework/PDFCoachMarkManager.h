/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFCoachMarkManagerPrivate;

@interface PDFCoachMarkManager : NSObject {

	PDFCoachMarkManagerPrivate* _private;

}
-(void)_cleanCoachMarks;
-(id)_pageLayerForPage:(id)arg1 ;
-(id)initWithPDFRenderingProperties:(id)arg1 ;
-(void)createCoachMarkForPage:(id)arg1 atFrame:(CGRect)arg2 ;
-(void)pageLayerDidAppear:(id)arg1 ;
-(void)pageLayerWillRemove:(id)arg1 ;
@end

