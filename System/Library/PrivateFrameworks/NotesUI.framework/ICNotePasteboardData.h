/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, ICDataPersister;

@interface ICNotePasteboardData : NSObject <NSSecureCoding> {

	NSData* _attributedStringData;
	ICDataPersister* _dataPersister;

}

@property (nonatomic,readonly) NSData * attributedStringData;                //@synthesize attributedStringData=_attributedStringData - In the implementation block
@property (nonatomic,readonly) ICDataPersister * dataPersister;              //@synthesize dataPersister=_dataPersister - In the implementation block
+(id)pasteboardDataFromPersistenceData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(ICDataPersister *)dataPersister;
-(NSData *)attributedStringData;
-(id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2 ;
-(id)persistenceData;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

