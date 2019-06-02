/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	BOOL mLinkAbsolute;
	BOOL mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(id)URI;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)linkAbsolute;
-(void)setLinkAbsolute:(BOOL)arg1 ;
-(BOOL)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg1 ;
-(id)namedLocation;
-(void)setNamedLocation:(id)arg1 ;
-(void)setURI:(id)arg1 ;
-(id)macName;
-(void)setMacName:(id)arg1 ;
-(id)dosName;
-(void)setDosName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
@end

