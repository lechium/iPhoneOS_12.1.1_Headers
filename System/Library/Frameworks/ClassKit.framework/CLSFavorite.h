/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>

@class NSString, NSArray, NSURL;

@interface CLSFavorite : CLSObject {

	NSString* _title;
	NSString* _storeIdentifier;
	int _type;
	NSArray* _contextIdentifierPath;
	NSURL* _URL;
	long long _contextType;
	NSString* _bundleIdentifier;
	NSString* _contentStoreIdentifier;

}

@property (nonatomic,retain) NSArray * contextIdentifierPath;              //@synthesize contextIdentifierPath=_contextIdentifierPath - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long contextType;                        //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSString * contentStoreIdentifier;              //@synthesize contentStoreIdentifier=_contentStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setContextType:(long long)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(long long)contextType;
-(BOOL)validateObject:(id*)arg1 ;
-(NSArray *)contextIdentifierPath;
-(NSString *)contentStoreIdentifier;
-(id)initWithTitle:(id)arg1 contextIdentifierPath:(id)arg2 URL:(id)arg3 type:(int)arg4 contextType:(long long)arg5 andBundleIdentifier:(id)arg6 contentStoreIdentifier:(id)arg7 ;
-(id)initWithTitle:(id)arg1 context:(id)arg2 ;
-(id)initWithTitle:(id)arg1 URL:(id)arg2 andBundleIdentifier:(id)arg3 ;
-(void)setContextIdentifierPath:(NSArray *)arg1 ;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

