/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKGenre : NSObject {

	NSString* _uniqueID;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)genresWithDictionaries:(id)arg1 ;
-(NSString *)uniqueID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
@end

