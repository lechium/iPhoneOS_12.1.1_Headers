/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
-(void)setSapSession:(ICSAPSession *)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
-(ICSAPSession *)sapSession;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
@end

