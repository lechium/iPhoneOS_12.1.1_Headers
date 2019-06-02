/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADTextClient.h>

@class WDAAnchor, WDATextBox, OADDrawable, NSString;

@interface WDAContent : NSObject <OADClient, OADTextClient> {

	WDAAnchor* mAnchor;
	WDATextBox* mTextBox;
	OADDrawable* mDrawable;
	int mTextType;

}

@property (nonatomic,readonly) WDAAnchor * anchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForType:(unsigned short)arg1 ;
-(BOOL)hasBounds;
-(id)drawable;
-(BOOL)isShape;
-(id)textBox;
-(int)textType;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 ;
-(id)createAnchor;
-(void)clearAnchor;
-(id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2 ;
-(void)setTextBox:(id)arg1 document:(id)arg2 ;
-(BOOL)isLine;
-(BOOL)isTopLevelObject;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(NSString *)description;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)floating;
-(BOOL)hasText;
-(WDAAnchor *)anchor;
@end

