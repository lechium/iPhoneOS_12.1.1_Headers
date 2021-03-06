/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MusicProductDescription : NSObject <NSCopying> {

	long long _format;
	NSString* _text;
	NSString* _storeEditorNotes;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * storeEditorNotes;              //@synthesize storeEditorNotes=_storeEditorNotes - In the implementation block
-(id)initWithStoreEditorNotes:(id)arg1 ;
-(NSString *)storeEditorNotes;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)initWithText:(id)arg1 ;
-(BOOL)isEmpty;
-(long long)format;
@end

