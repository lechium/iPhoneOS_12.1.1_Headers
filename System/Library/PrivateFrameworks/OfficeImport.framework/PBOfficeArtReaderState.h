/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class PBPresentationReaderState, PXPresentationState;

@interface PBOfficeArtReaderState : OABReaderState {

	PBPresentationReaderState* mPresentationState;
	PXPresentationState* mXmlDocumentState;

}
-(id)xmlDrawingState;
-(id)presentationState;
-(id)initWithPresentationState:(id)arg1 ;
-(id)xmlDocumentState;
-(id)drawableOnTgtSlideForShapeId:(int)arg1 ;
-(void)dealloc;
@end

