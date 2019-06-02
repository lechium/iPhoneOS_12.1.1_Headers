/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@interface ETDataSourceWithCache : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *> > >* _cache;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > dump_path;
	BOOL dump_descriptors;

}
-(id)initWithDataSource:(id)arg1 dumpPath:(id)arg2 ;
-(int)numberOfDataPoints;
-(id)initWithDataSource:(id)arg1 ;
-(id)dataPointAtIndex:(int)arg1 ;
@end
