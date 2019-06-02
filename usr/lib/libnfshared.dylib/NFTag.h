/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSArray;


@protocol NFTag <NSObject>
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) unsigned technology; 
@property (nonatomic,copy,readonly) NSData * tagID; 
@property (nonatomic,copy,readonly) NSData * IDm; 
@property (nonatomic,copy,readonly) NSData * PMm; 
@property (nonatomic,copy,readonly) NSData * SystemCode; 
@property (nonatomic,copy,readonly) NSArray * allSystemCodes; 
@property (nonatomic,copy,readonly) NSData * AppData; 
@property (nonatomic,copy,readonly) NSData * UID; 
@required
-(NSData *)IDm;
-(NSData *)PMm;
-(NSData *)SystemCode;
-(NSData *)AppData;
-(NSData *)UID;
-(id)initWithNFTag:(id)arg1;
-(NSData *)tagID;
-(NSArray *)allSystemCodes;
-(unsigned)technology;
-(id)description;
-(unsigned)type;

@end

