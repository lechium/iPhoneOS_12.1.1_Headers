/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFMailContentProviderDataSource;
@interface _SFMailContentProvider : NSObject {

	id<_SFMailContentProviderDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<_SFMailContentProviderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)prepareMailComposeViewController:(id)arg1 withURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<_SFMailContentProviderDataSource>)dataSource;
-(void)setDataSource:(id<_SFMailContentProviderDataSource>)arg1 ;
@end

