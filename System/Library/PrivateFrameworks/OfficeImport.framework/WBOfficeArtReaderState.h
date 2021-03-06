/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;
	WXReadState* mXmlDocumentState;

}

@property (assign,nonatomic) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(id)initWithClient:(Class)arg1 ;
-(id)xmlDrawingState;
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
-(void)dealloc;
@end

