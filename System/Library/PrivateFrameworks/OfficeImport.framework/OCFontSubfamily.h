/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OCFontMetadata;

@interface OCFontSubfamily : NSObject {

	NSString* _name;
	OCFontMetadata* _metadata;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OCFontMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2 ;
-(id)initWithName:(id)arg1 metadata:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(OCFontMetadata *)metadata;
@end

