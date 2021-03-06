/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject <NSSecureCoding> {

	NSMutableDictionary* _metadata;
	NSString* _sectionIdentifier;
	long long _type;

}

@property (nonatomic,retain) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sectionIdentifier;
-(id)copyViewController;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(long long)_typeForTypeString:(id)arg1 ;
-(id)_typeStringForType:(long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

