/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSString;

@interface _MKAppImageManagerContainer : NSObject {

	/*^block*/id _completionHandler;
	NSMutableData* _data;
	NSString* _urlString;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * urlString;                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
@end

