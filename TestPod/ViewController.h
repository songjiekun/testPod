//
//  ViewController.h
//  TestPod
//
//  Created by song jiekun on 16/3/31.
//  Copyright © 2016年 song jiekun. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController<UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

/**
 *  淡入淡出时间
 */
#define ItemSpace 10

/**
 *  展示图片的collectionview
 */
@property (weak,nonatomic) IBOutlet UICollectionView *galleryCollectionView;

@property (strong,nonatomic) NSMutableArray<NSString *> *urlArray;



@end

