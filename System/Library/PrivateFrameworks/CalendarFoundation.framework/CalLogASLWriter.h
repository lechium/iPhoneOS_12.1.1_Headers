/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/CalLogWriter.h>

@interface CalLogASLWriter : CalLogWriter {

	asl_object_sRef log_client;

}
+(id)aslNamespaces;
-(void)_configureASLClient;
-(void)_configureASLNamespaces;
-(char*)aslLevelForLogLevel:(int)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)write:(id)arg1 ;
-(void)dealloc;
@end

