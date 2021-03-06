/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned callID;
	tagCONNRESULT* result;
	BOOL isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned callID; 
@property (assign) BOOL isQueryAnswered; 
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(id)initWithCallID:(unsigned)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(void)dealloc;
-(tagCONNRESULT*)result;
@end

