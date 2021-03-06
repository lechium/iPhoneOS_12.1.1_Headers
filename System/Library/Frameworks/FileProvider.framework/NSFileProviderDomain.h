/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSFileProviderDomain : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _displayName;
	NSString* _pathRelativeToDocumentStorage;

}

@property (copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (copy,readonly) NSString * pathRelativeToDocumentStorage;              //@synthesize pathRelativeToDocumentStorage=_pathRelativeToDocumentStorage - In the implementation block
+(id)domainFromPlistDictionary:(id)arg1 identifier:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSString *)pathRelativeToDocumentStorage;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 ;
-(id)plistDictionary;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
@end

