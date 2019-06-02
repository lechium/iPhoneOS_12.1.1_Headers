/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNGreedyClusteringReadOnly.h>
#import <libobjc.A.dylib/VNClusteringWritable.h>

@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {

	shared_ptr<vision::mod::FaceClustering>* m_ClusteringImpl;

}
+(id)nonGroupedGroupID;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(long long)_cancellableUpdate:(ImageDescriptorBufferAbstract*)arg1 facesToMove:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg2 ;
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
@end

