/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _OSLogDirectoryReference;

@interface _OSLogCollectionReference : NSObject {

	_OSLogDirectoryReference* _diagnosticsDirectoryReference;
	_OSLogDirectoryReference* _timesyncReference;
	_OSLogDirectoryReference* _UUIDTextReference;

}

@property (nonatomic,readonly) _OSLogDirectoryReference * diagnosticsDirectoryReference;              //@synthesize diagnosticsDirectoryReference=_diagnosticsDirectoryReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * timesyncReference;                          //@synthesize timesyncReference=_timesyncReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * UUIDTextReference;                          //@synthesize UUIDTextReference=_UUIDTextReference - In the implementation block
+(id)referenceWithURL:(id)arg1 error:(id*)arg2 ;
+(id)localDBRefWithError:(id*)arg1 ;
-(id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3 ;
-(_OSLogDirectoryReference *)diagnosticsDirectoryReference;
-(_OSLogDirectoryReference *)timesyncReference;
-(_OSLogDirectoryReference *)UUIDTextReference;
-(void)close;
@end

