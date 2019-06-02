/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject {

	BOOL _shouldSignBody;
	NSArray* _fields;
	NSArray* _headers;

}

@property (assign,nonatomic) BOOL shouldSignBody;              //@synthesize shouldSignBody=_shouldSignBody - In the implementation block
@property (nonatomic,copy) NSArray * fields;                   //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * headers;                  //@synthesize headers=_headers - In the implementation block
-(BOOL)shouldSignBody;
-(void)setShouldSignBody:(BOOL)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
-(void)setHeaders:(NSArray *)arg1 ;
-(NSArray *)headers;
-(id)description;
@end

